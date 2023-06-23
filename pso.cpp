#include <iostream>
#include <cmath>
#include <vector>
#include <random>

// Define the objective function to minimize
double objective(const std::vector<double>& x) {
    double sum = 0.0;
    for (double value : x) {
        sum += std::pow(value, 2);
    }
    return sum;
}

// Define the PSO function
std::vector<double> pso(double (*objective)(const std::vector<double>&), const std::vector<double>& lb,
                        const std::vector<double>& ub, int dimensions, int swarm_size, int max_iterations,
                        double w, double phi_p, double phi_g) {
    std::vector<std::vector<double>> swarm_position(swarm_size, std::vector<double>(dimensions));
    std::vector<std::vector<double>> swarm_velocity(swarm_size, std::vector<double>(dimensions));
    std::vector<std::vector<double>> swarm_best_position(swarm_size, std::vector<double>(dimensions));
    std::vector<double> swarm_best_cost(swarm_size, INFINITY);
    std::vector<double> global_best_position(dimensions);
    double global_best_cost = INFINITY;

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_real_distribution<double> uniform_dist(0.0, 1.0);

    // Initialize the swarm
    for (int i = 0; i < swarm_size; i++) {
        for (int d = 0; d < dimensions; d++) {
            swarm_position[i][d] = uniform_dist(generator) * (ub[d] - lb[d]) + lb[d];
            swarm_best_position[i][d] = swarm_position[i][d];
        }
        swarm_best_cost[i] = objective(swarm_position[i]);

        if (swarm_best_cost[i] < global_best_cost) {
            global_best_cost = swarm_best_cost[i];
            global_best_position = swarm_best_position[i];
        }

        for (int d = 0; d < dimensions; d++) {
            swarm_velocity[i][d] = uniform_dist(generator) * (ub[d] - lb[d]) - (ub[d] - lb[d]) / 2;
        }
    }

    // Main optimization loop
    for (int iteration = 0; iteration < max_iterations; iteration++) {
        for (int i = 0; i < swarm_size; i++) {
            for (int d = 0; d < dimensions; d++) {
                double rp = uniform_dist(generator);
                double rg = uniform_dist(generator);

                swarm_velocity[i][d] = (w * swarm_velocity[i][d] +
                                        phi_p * rp * (swarm_best_position[i][d] - swarm_position[i][d]) +
                                        phi_g * rg * (global_best_position[d] - swarm_position[i][d]));

                swarm_position[i][d] += swarm_velocity[i][d];
                swarm_position[i][d] = std::max(std::min(swarm_position[i][d], ub[d]), lb[d]);
            }

            double particle_cost = objective(swarm_position[i]);

            if (particle_cost < swarm_best_cost[i]) {
                swarm_best_position[i] = swarm_position[i];
                swarm_best_cost[i] = particle_cost;

                if (particle_cost < global_best_cost) {
                    global_best_cost = particle_cost;
                    global_best_position = swarm_position[i];
                }
            }
        }
    }

    return global_best_position;
}

int main() {
    // Set the problem dimensions, bounds, and other parameters
    int dimensions = 2;
    std::vector<double> lb = { -5.0, -5.0 };
    std::vector<double> ub = { 5.0, 5.0 };
    int swarm_size = 50;
    int max_iterations = 100;
    double w = 0.7;
    double phi_p = 0.5;
    double phi_g = 0.5;

    // Run the PSO algorithm
    std::vector<double> best_solution = pso(objective, lb, ub, dimensions, swarm_size, max_iterations, w, phi_p, phi_g);

    // Print the best solution
    std::cout << "Best Solution:";
    for (double value : best_solution) {
        std::cout << " " << value;
    }
    std::cout << std::endl;

    return 0;
}


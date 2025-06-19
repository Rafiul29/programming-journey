clc;
clear all;
close all;

% Parameters for Linear Congruence Method
a = 1664525;       % Multiplier
c = 1013904223;    % Increment
m = 2^32;          % Modulus
seed = 12345;      % Initial seed
n = 100;           % Number of random numbers to generate

% Initialize an array to store random numbers
random_numbers = zeros(1, n);

% Set the initial seed
x = seed;

% Generate random numbers
for i = 1:n
    % Calculate the next random number using LCM formula
    x = mod(a * x + c, m);
    % Scale the random number to [0, 1]
    random_numbers(i) = x / m;
end 

% Display the generated random numbers
disp(random_numbers);

% Plot the generated random numbers
figure;
plot(1:n,randomNumbers , '-ko', 'MarkerSize', 3, 'MarkerFaceColor', 'k', 'MarkerEdgeColor', 'k');

title('Random Numbers Generated using Linear Congruence Method');
xlabel('Iteration Number');
ylabel('Random Number [0, 1]');
grid on;

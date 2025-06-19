clear all;
close all;
clc;

n = input('Number of Random Numbers you want to generate: ');
seed = input('Enter the seed: ');

disp('Generated Random Numbers are:');
randomNumbers = zeros(1, n);  % Pre-allocate an array to store random numbers

for i = 1:n
    random = seed ^ 2;
    random = random / 100;  % Find the dividend
    random = rem(random, 10000);  % Get the remainder
    seed = fix(random);  % Update the seed with the integer part
    randomNumbers(i) = seed;  % Store the generated number
    fprintf('%d ', seed);
end
fprintf('\n');

% Plotting the random numbers
plot(1:n,randomNumbers , '-ko', 'MarkerSize', 3, 'MarkerFaceColor', 'kvalue_of_pi=(count/N)*4;', 'MarkerEdgeColor', 'k');
hold on;

title('Random Numbers Generated using Mid-Square Method');
xlabel('Iteration Number');
ylabel('Random Number');
grid on;

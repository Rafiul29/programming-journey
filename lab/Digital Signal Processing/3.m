function [y, n] = sigfold(x, m)
    % This function computes the folded version of a signal.
    % Inputs:
    %   x: Signal values
    %   m: Time indices
    % Outputs:
    %   y: Folded signal values
    %   n: Folded time indices
    
    % Compute the folded time indices
    n = -fliplr(m);
    
    % Compute the folded signal values
    y = fliplr(x);
end

% Example usage
x = [1, 2, 3, 4]; % Signal values
m = [0, 1, 2, 3]; % Signal time indices

[y, n] = sigfold(x, m);

% Display results
disp('Folded Signal:');
disp(y);
disp('Folded Time Indices:');
disp(n);

% Plot the original and folded signals
figure;

% Original signal
subplot(2, 1, 1);
stem(m, x, 'b', 'LineWidth', 1.5);
title('Original Signal');
xlabel('n');
ylabel('x[n]');
grid on;

% Folded signal
subplot(2, 1, 2);
stem(n, y, 'r', 'LineWidth', 1.5);
title('Folded Signal');
xlabel('n');
ylabel('y[n]');
grid on;

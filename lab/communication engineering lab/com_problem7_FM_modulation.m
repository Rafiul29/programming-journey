% Clear workspace and close all figures
clear all;
close all;

% Time vector
t = 0:0.0001:1;

% Input parameters
fm = input('Enter the message signal frequency (Hz): ');   % Frequency of the message signal
fc = input('Enter the carrier signal frequency (Hz): ');   % Frequency of the carrier signal
mi = input('Enter the modulation index: ');                % Modulation index for frequency modulation

% Generate the message signal
message_signal = sin(2 * pi * fm * t);

% Plot the message signal
subplot(3, 1, 1);
plot(t, message_signal, 'b', 'LineWidth', 1.5); % Blue line for better visibility
xlabel('Time (s)');
ylabel('Amplitude');
title('Message Signal');
grid on;

% Generate the carrier signal
carrier_signal = sin(2 * pi * fc * t);

% Plot the carrier signal
subplot(3, 1, 2);
plot(t, carrier_signal, 'r', 'LineWidth', 1.5); % Red line for better visibility
xlabel('Time (s)');
ylabel('Amplitude');
title('Carrier Signal');
grid on;

% Generate the frequency modulated (FM) signal
fm_signal = sin(2 * pi * fc * t + mi * sin(2 * pi * fm * t));

% Plot the FM signal
subplot(3, 1, 3);
plot(t, fm_signal, 'g', 'LineWidth', 1.5); % Green line for better visibility
xlabel('Time (s)');
ylabel('Amplitude');
title('Frequency Modulated (FM) Signal');
grid on;

% Clear workspace and close all figures
clear all;
close all;

% Time vector
t = 0:0.0001:1;

% Input parameters
vm = input('Enter the amplitude of the message signal: ');  % Amplitude of the message signal
vc = input('Enter the amplitude of the carrier signal: ');  % Amplitude of the carrier signal
fm = input('Enter the message signal frequency (Hz): ');    % Frequency of the message signal
fc = input('Enter the carrier signal frequency (Hz): ');    % Frequency of the carrier signal
m = input('Enter the modulation index: ');                  % Modulation index

% Generate the message signal
message_signal = vm * sin(2 * pi * fm * t);

% Generate the carrier signal
carrier_signal = vc * sin(2 * pi * fc * t);

% Generate the phase-modulated (PM) wave
pm_wave = vc * sin(2 * pi * fc * t + m .* sin(2 * pi * fm * t));

% Plot the message signal
subplot(3, 1, 1);
plot(t, message_signal, 'b', 'LineWidth', 1.5);
xlabel('Time (s)');
ylabel('Amplitude');
title('Message Signal');
grid on;

% Plot the carrier signal
subplot(3, 1, 2);
plot(t, carrier_signal, 'r', 'LineWidth', 1.5);
xlabel('Time (s)');
ylabel('Amplitude');
title('Carrier Signal');
grid on;

% Plot the phase-modulated (PM) wave
subplot(3, 1, 3);
plot(t, pm_wave, 'g', 'LineWidth', 1.5);
xlabel('Time (s)');
ylabel('Amplitude');
title('Phase Modulated (PM) Wave');
grid on;


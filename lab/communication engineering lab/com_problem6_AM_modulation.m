

% Time vector for signal generation
t=0:0.0001:1;

% Set default line width for plots
set(0, 'defaultlinelinewidth', 2);

% Define signal amplitude
A = 5; % Amplitude of signal

% Get user inputs for message frequency, carrier frequency, and modulation index
fm = input('Enter message frequency (fm) in Hz: ');
fc = input('Enter carrier frequency (fc) in Hz: '); % Carrier frequency must be greater than message frequency
mi = input('Enter modulation index (mi): ');

% Generate the signals
Sm = A * sin(2 * pi * fm * t); % Message signal
Sc = A * sin(2 * pi * fc * t); % Carrier signal
Sfm = (A + mi * Sm) .* sin(2 * pi * fc * t); % AM signal, amplitude of carrier changes

% Plot the signals

% Message signal plot
subplot(3, 1, 1);
plot(t, Sm);
xlabel('Time (s)');
ylabel('Amplitude');
title('Message Signal');
grid on;

% Carrier signal plot
subplot(3, 1, 2);
plot(t, Sc);
xlabel('Time (s)');
ylabel('Amplitude');
title('Carrier Signal');
grid on;

% AM signal plot
subplot(3, 1, 3);
plot(t, Sfm);
xlabel('Time (s)');
ylabel('Amplitude');
title('AM Signal');
grid on;

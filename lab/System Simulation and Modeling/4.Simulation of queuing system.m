clc;
clear all;
close all;

% Given Data
T = [1, 2, 3]; % Possible inter-arrival times
f_t = [0.25, 0.50, 0.25]; % Probability distribution of inter-arrival times
S = [1, 2, 3]; % Possible service times
f_s = [0.50, 0.25, 0.25]; % Probability distribution of service times

% Random numbers for inter-arrival times and service times
rand_inter_arrival = [12, 40, 48, 93, 61, 17, 55, 21, 85, 88];
rand_service = [54, 90, 18, 38, 16, 87, 91, 41, 54, 11];

% Map random numbers to inter-arrival times
inter_arrival_time = zeros(1, length(rand_inter_arrival));
for i = 1:length(rand_inter_arrival)
    if rand_inter_arrival(i) <= 24
        inter_arrival_time(i) = 1;
    elseif rand_inter_arrival(i) <= 74
        inter_arrival_time(i) = 2;
    else
        inter_arrival_time(i) = 3;
    end
end

% Map random numbers to service times
service_time = zeros(1, length(rand_service));
for i = 1:length(rand_service)
    if rand_service(i) <= 49
        service_time(i) = 1;
    elseif rand_service(i) <= 74
        service_time(i) = 2;
    else
        service_time(i) = 3;
    end
end

% Initializing arrays for calculations
arrival_time = zeros(1, length(rand_inter_arrival)); % Arrival times (AT)
service_begin = zeros(1, length(rand_inter_arrival)); % Service begin (SB)
service_end = zeros(1, length(rand_inter_arrival)); % Service end (SE)
waiting_time = zeros(1, length(rand_inter_arrival)); % Waiting time (WT)

% First customer
arrival_time(1) = inter_arrival_time(1);
service_begin(1) = arrival_time(1);
service_end(1) = service_begin(1) + service_time(1);
waiting_time(1) = 0;

% Loop for subsequent customers
for i = 2:length(rand_inter_arrival)
    arrival_time(i) = arrival_time(i-1) + inter_arrival_time(i);
    service_begin(i) = max(arrival_time(i), service_end(i-1));
    service_end(i) = service_begin(i) + service_time(i);
    waiting_time(i) = service_begin(i) - arrival_time(i);
end

% Display the results
disp('Arrival number   Arrival Time (AT+T)   Time Service Begin (SB)   Time Service End (SE=SB+S)   Waiting time in Queue');
disp('--------------   -------------------   -----------------------   --------------------------   ---------------------')
for i = 1:length(rand_inter_arrival)
    fprintf('%8d %16d %25d %25d %26d\n', i, arrival_time(i), service_begin(i), service_end(i), waiting_time(i));
end
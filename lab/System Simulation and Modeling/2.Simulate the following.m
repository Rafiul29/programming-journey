clear all;
clc;
hold on;

% Initial values
target = 10000; % Target number of followers
total_weeks = 10; % Number of weeks
gain_new_followers = 1500; % New followers gained each week
lose_followers = 500; % Followers lost each week
refollow = 100; % Followers re-follow each week

% Initial current followers
curr_followers = 0;

% Store followers and weeks to plot later
followers = zeros(1, total_weeks + 1);
weeks=0:total_weeks;

% Simulate for each week
for week = 1:total_weeks
    % Gain new followers
    curr_followers = curr_followers + gain_new_followers- lose_followers + refollow;
    followers(week + 1) = curr_followers;

    % Display the followers count for the current week
    fprintf('Week %d: %d followers\n', week, followers);
    
    % Check if target is reached
    if curr_followers >= target
        fprintf('Target reached in week %d with %d followers\n', week, curr_followers);
        break;
    end
 
end

% If the target is not reached after the loop
if followers < target
    fprintf('Target not reached after %d weeks. Final count: %d followers\n', weeks, followers);
end

%Plot of the growth
plot(weeks, followers, '-ko', 'MarkerSize', 5, 'MarkerFaceColor', 'k', 'MarkerEdgeColor', 'k');

xlabel('Weeks');
ylabel('Followers');
title('Follower Growth Simulation');
grid on;

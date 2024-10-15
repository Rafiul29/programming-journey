a = 0:pi/100:3*pi;
b = sin(a); 
plot (a, b)

xlabel('x = 0:2\pi')  
ylabel('Sine of x')  
title('Plot of the Sine function')


   x = [1:10];  
    y = [58.5, 63.8, 64.2, 67.3, 71.5, 88.3, 90.1, 90.6, 89.5, 90.4];  
    plot(x, y,':ok')
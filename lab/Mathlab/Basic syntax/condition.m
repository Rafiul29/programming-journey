x=input('Enter the number x: ');
if x<10
    disp(x)
elseif x>10 && x<=20
    disp("this number is 10 to 20");
else
    disp("Out of range number");
end


// Odd Even check
x=input('Enter the number x: ');
if x%2==0
    disp("Even")
else
    disp("Odd");
end

// Switch
a = input('enter a number : ');
switch  a  
    case 1  
        disp('Monday')  
    case 2  
        disp('Tuesday')  
    case 3  
        disp('Wednesday')  
    case 4  
        disp('Thursday')  
    case 5  
        disp('Friday')  
    case 6  
        disp('Saturday')  
    case 7  
        disp('Sunday')  
    otherwise  
        disp('not a weekday')  
end  
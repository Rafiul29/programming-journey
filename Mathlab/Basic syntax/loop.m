    for a = 10:20  
     fprintf('value of a: %d\n', a);  
    end  

   for a = 1.0: -0.1: 0.0  
     disp(a)  
    end  

      for a = 10:2:20  
     disp(a)  
    end  

        for a = 10:2:20  
     disp(['a: ',num2str(a)]);  
    end

    // while loop
a=10;
while(a<20)
fprintf('value of a: %d\n',a);
a=a+1;
end


// nested for loop

for i=1:5
    for j=1:5
        fprintf('value of i and j: %d %d\n',i,j);
    end
end

// check prime number

for i=2:5
    for j=2:5
        if(~mod(i, j))
            break;
        end
    end
    if(j>(i/j))
        fprintf("prime is :%d\n",i);
    end
end
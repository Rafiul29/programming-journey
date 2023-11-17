xmax=640;
ymax=480;

disp('Enter four control point (x,y): ');

for i=1:4
    for j=1:2
        co(i,j)=input('');
    end
end

for i=1:640
    x=i;
    y=ymax/2;
    plot(x,y);
hold on;
end

for i=1:480
    y=i;
    x=xmax/2;
    plot(x,y);
hold on;
end

title("Bezier Curve drawing Algorithm");

u1=0;

b=[
   -1 3 -3 1;
   3 -6 3 0;
   -3 3 0 0;
    1 0 0 0
   ];

for i=1:0.01:2
    u2=(i-1)*(i-1);
    u3=(i-1)*(i-1)*(i-1);
    u=[u3 u2 i-1 1];
    temp=u*b;
    re=temp*co;
    plot(320+re(1,1),240+re(1,2),'ok');
   hold on;
end

hold on,grid on;




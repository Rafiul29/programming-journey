
xmaxa = 700;
ymaxa = 700;
for i=1:700
    x=i;
    y=ymaxa/2;
    plot(x,y);
hold on;
end
for j=1:700
    y=j;
    x=xmaxa/2;
    plot(x,y);
hold on;
end


x1=input("Enter x1=");
y1=input("Enter y1=");
x2=input("Enter x2=");
y2=input("Enter y2=");
x3=input("Enter x3=");
y3=input("Enter y3=");
sx=input('Enter X direction scaling factor:');
sy=input('Enter Y direction scaling factor:');

line([300+x1,300+x2],[300+y1,300+y2]);
line([300+x2,300+x3],[300+y2,300+y3]);
line([300+x1,300+x3],[300+y1,300+y3]);

x1=x1*sx;
y1=y1*sy;
x2=x2*sx;
y2=y2*sy;
x3=x3*sx;
y3=y3*sy;


line([300+x1,300+x2],[300+y1,300+y2]);
line([300+x2,300+x3],[300+y2,300+y3]);
line([300+x1,300+x3],[300+y1,300+y3]);



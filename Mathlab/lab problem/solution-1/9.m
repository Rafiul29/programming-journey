xma=800;
yma=600;
disp('Enter lower left corner coordinate (xmin,ymin):');
xmin=input('');
ymin=input('');
disp('Enter upper right corner coordinate (xmax,ymax):');
xmax=input('');
ymax=input('');
n=input('Number of line : ');
for k=1:n
x1=input('Enter starting point x coordinate :');
y1=input('Enter starting point y coordinate :');
x2=input('Enter ending point x coordinate :');
y2=input('Enter ending point y coordinate :');
for i=1:800
    x=i;
    y=yma/2;
    plot(x,y);
hold on;
end
for i=1:600
    y=i;
    x=xma/2;
plot(x,y);
hold on;
end
line([400+xmin,400+xmax],[300+ymin,300+ymin]);
line([400+xmin,400+xmin],[300+ymin,300+ymax]);
line([400+xmin,400+xmax],[300+ymax,300+ymax]);
line([400+xmax,400+xmax],[300+ymin,300+ymax]);

for i=1:4
    c(i)=0;
end

x=x1;
y=y1;
if(x<xmin)
    c(4)=1;
elseif(x>xmax)
    c(3)=1;
elseif(y<ymin)
    c(2)=1;
elseif(y>ymax)
    c(1)=1;
end

a=c(1)*8+c(2)*4+c(3)*2+c(4);

for i=1:4
    c(i)=0;
end

x=x2;
y=y2;

if(x<xmin)
    c(4)=1;
elseif(x>xmax)
    c(3)=1;
elseif(y<ymin)
    c(2)=1;
elseif(y>ymax)
    c(1)=1;
end

b=c(1)*8+c(2)*4+c(3)*2+c(4);

d=a & b;
if(a==0 && b==0)
    disp('Line is completely inside');
  line([400+x1,400+x2],[300+y1,300+y2]);
elseif(d~=0)
      disp('Line is completely outside');
else
    disp('Line is partially inside/outside clipping candidate');
    line([400+x1,400+x2],[300+y1,300+y2]);
end
end
title('Cohen Sutherland line clipping algorithm to find lines category');


















xmax=640;
ymax=480;
x1=input('enter starting value for x1: ');
y1=input('enter starting value for y1: ');
x2=input('enter starting value for x2: ');
y2=input('enter starting value for y2: ');
tx=input('enter Translation x coordinate: ');
ty=input('enter Translation y coordinate: ');
c = input('Enter the rotation angle :');
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
grid on;
line([320+x1, 320+x2],[240+y1, 240+y2]); %Orginal line
tx1 = x1 + tx ;
ty1 = y1 + ty ;
tx2 = x2 + tx ;
ty2 = y2 + ty ;
line([320+tx1, 320+tx2],[240+ty1, 240+ty2]); %Translation line
rx1 = tx1*cos(c) - ty1*sin(c);
ry1 = tx1*sin(c) + ty1*cos(c);
rx2 = tx2*cos(c) - ty2*sin(c);
ry2 = tx2*sin(c) + ty2*cos(c);
line([320+rx1, 320+rx2],[240+ry1, 240+ry2]); %rotation line
title('Translation a line and then rotation');
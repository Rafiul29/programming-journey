
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
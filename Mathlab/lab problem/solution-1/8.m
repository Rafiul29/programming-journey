clear all;
xma=800;
yma=600;
x1=input('Enter first vertices X coordinate : ');
y1=input ('Enter first vertices Y coordinate :');
x2=input('Enter second vertices X coordinate : ');
y2=input ('Enter second vertices Y coordinate :');
x3=input('Enter third vertices X coordinate : ');
y3=input ('Enter third vertices Y coordinate :');
h=input('Enter fixed point x coordinate :');
k=input('Enter fixed point y coordinate :');
sx=input('Enter X direction scaling factor:');
sy=input('Enter Y direction scaling factor:');
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

title('Scaling a triangle according to scaling factor');
line([400+x1,400+x2],[300+y1,300+y2]);
line([400+x2,400+x3],[300+y2,300+y3]);
line([400+x3,400+x1],[300+y3,300+y1]);
x1=h+(x1-h)*sx;
y1=k+(y1-k)*sy;
x2=h+(x2-h)*sx;
y2=k+(y2-k)*sy;
x3=h+(x3-h)*sx;
y3=k+(y3-k)*sy;
line([400+x1,400+x2],[300+y1,300+y2]);
line([400+x2,400+x3],[300+y2,300+y3]);
line([400+x3,400+x1],[300+y3,300+y1])
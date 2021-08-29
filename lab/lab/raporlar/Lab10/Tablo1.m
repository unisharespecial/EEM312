clear all
format long
Vdd=[1 1.5 2 2.5 3 4 5];
PDP=[30.3*10^-12 4.05*10^-15 0.217*10^-12 0.338*10^-12 9*10^-15 1.12*10^-14 2*10^-14];
figure(2)
plot(PDP,Vdd)
xlabel('PDP');
ylabel('Vdd');

int simple();
void main()
{
    float SI;
SI=simple();
printf("Simple Interest = %.2f", SI);
}
int simple()
{
 float principle, time, rate, SI;
    
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);
        
    time=time/12;

    SI = (principle * time * rate) / 100;
    
return SI;
}
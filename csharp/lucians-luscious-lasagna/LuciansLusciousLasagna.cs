class Lasagna
{
    public int ExpectedMinutesInOven()
    {
        return 40;
    }

    public int RemainingMinutesInOven(int accumulated)
    {
        return ExpectedMinutesInOven() - accumulated;
    }

    public int PreparationTimeInMinutes(int layers)
    {
        return layers * 2;
    }

    public int ElapsedTimeInMinutes(int layers, int accumulated)
    {
        return PreparationTimeInMinutes(layers) + ExpectedMinutesInOven() - RemainingMinutesInOven(accumulated);
    }
}

static class AssemblyLine
{
    const int CarsPerHour = 221;
    const int MinutesPerHour = 60;

    public static double SuccessRate(int speed)
    {
        switch (speed)
        {
            case 0:
                return 0d;
            case 1:
            case 2:
            case 3:
            case 4:
                return 1d;
            case 5:
            case 6:
            case 7:
            case 8:
                return 0.9d;
            case 9:
                return 0.8d;
            case 10:
            default:
                return 0.77d;
        }
    }
    
    public static double ProductionRatePerHour(int speed)
    {
        return speed * (double)CarsPerHour * SuccessRate(speed);
    }

    public static int WorkingItemsPerMinute(int speed)
    {
        return (int)ProductionRatePerHour(speed) / MinutesPerHour;
    }
}

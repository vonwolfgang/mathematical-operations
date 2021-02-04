using System;

namespace PrimeNumber
{
    class Program
    {
        static void Main(string[] args)
        {
            IsPrime(5);
        }
        private static void IsPrime(int number)
        {
            bool x = true;

            for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                {
                    x = false;
                }

            }

            if (x == true)
            {
                Console.WriteLine("this number is prime {0}", number);
            }
            else
            {
                Console.WriteLine("this number is not prime {0}", number);
            }
        }
    }
}

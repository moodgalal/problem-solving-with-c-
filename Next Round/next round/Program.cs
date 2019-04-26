using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace next_round
{
    class Program
    {
        static void Main ( string[] args )
        {
            int n, k, counter = 0;
            n = int.Parse(Console.ReadLine());
            k = int.Parse(Console.ReadLine());

            int[] scores = new int[n];
            for(int i=0; i< n; i++)
            {
                scores[i] = int.Parse(Console.ReadLine());
            }

            for(int i=0; i< n; i++)
            {
                if (scores[i] >= scores[k - 1] && scores[i] != 0)
                    counter++;
            }

            Console.WriteLine(counter);
        }
        
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace trainers_test
{
    class Program
    {
        static void Main ( string[] args )
        {
           uint w;
            w = uint.Parse(Console.ReadLine());
            if (w % 2 == 0 && w != 2)
                Console.WriteLine("YES");
            else
                Console.WriteLine("NO");
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program9_6
    {
        static void Main(string[] args)
        {
            System.Diagnostics.Stopwatch sw = new System.Diagnostics.Stopwatch();
            int[] a = new int[10000];
            Random r = new Random();

            for (int i = 0; i < 1000; i++)
            {
                a[i] = r.Next();
            }
            sw.Reset();
            sw.Start();
            for (int i = 0; i < 100; i++)
            {
                funA(a);
            }

            sw.Stop();
            Console.WriteLine("수헹시간 : {0}", sw.ElapsedTicks);

            sw.Reset();
            sw.Start();
            for (int i = 0; i < 100; i++)
            {
                funB(ref a);
            }

            sw.Stop();
            Console.WriteLine("수헹시간 : {0}", sw.ElapsedTicks);
        }

        static void funA(int[] a)
        {
            int[] b = new int[10000];
            a.CopyTo(b, 0);
        }

        static void funB(ref int[] a)
        {
            int[] b = new int[10000];
            a.CopyTo(b, 0);
        }
    }
}
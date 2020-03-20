using System;

namespace ConsoleApp1
{
    class Program
    {
        private int count;
        public int Count
        {
            get { return count; }
            set { count = 42; } // 3237 - Noncompliant
        }

        static void Main(string[] args)
        {

            Console.WriteLine("Hello World!");

        }

        public class Rectangle
        {
            private readonly int length;
            private readonly int width;  // 4487 width is written but never read

            public Rectangle(int length, int width)
            {
                this.length = length;
                this.width = width;
            }

            public int Surface
            {
                get
                {
                    return length * length;
                }
            }
        }
    }
}

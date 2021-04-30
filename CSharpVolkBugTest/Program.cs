using System;
using System.Runtime.InteropServices;

namespace CSharpVolkBugTest
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Calling once...");
            Test(); //crash here

            Console.WriteLine("Calling twice...");
            Test();
        }

        private const string DLL_PATH = "../../../../test.dll";

        [DllImport(DLL_PATH)]
        private static extern void Test();
    }
}

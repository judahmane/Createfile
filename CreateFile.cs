using System;
using System.IO;

class Program
{
    static void Main(string[] args)
    {

        

        string location = "C:\\Users\\User\\CSharpFiles\\Log.txt";

        using (StreamWriter outputFile = new StreamWriter(Path.Combine(location), true))
        {
            outputFile.WriteLine("Text File Created using C#");
        }
    }
}

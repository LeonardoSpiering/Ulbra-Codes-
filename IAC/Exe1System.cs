using System;

class Exe1_AP1
{
	public static void Main()
	{
		int n;
		
		do
		{
		Console.WriteLine("Primeiro numero: ");
		n = int.Parse(Console.ReadLine());
		}while(n != 0);
		Console.WriteLine("Sistema Encerrado");
	}
}
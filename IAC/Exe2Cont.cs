using System;

class C#_Exe2AP1
{
	public static void Main()
	{
		int nl=0;
		int n;
		
		do
		{
			Console.WriteLine("Digite um numero: ");
			n = int.Parse(Console.ReadLine());
			nl++;
		}while(n%2 != 0);
		
		Console.WriteLine("Total de Numeros digitados: ", nl);
	}
}
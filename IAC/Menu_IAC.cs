using System;

class Menu_IAC
{	
    public static void Main() 
    {
        int Menu;

        do
        {
        Console.WriteLine("Escolha uma opçao:\n[1] - Tabuada \n[2] - Dias vividos \n[3] - Media da Ulbra \n[4] - IMC \n[5] - Sair \n ");
        Menu = int.Parse(Console.ReadLine());

        if (Menu == 1) Tabuada();
        else if (Menu == 2) DiasVividos();
        else if (Menu == 3) MediaUlbra();
        else if (Menu == 4) IMC();
        else if(Menu > 5 )
            Console.WriteLine("Escolha uma opcao valida!");
        }

    }while(Menu != 5 );

    static void Tabuada()
    {
        int Num = 0;
        int Result = 0;

        Console.WriteLine("Numero Desejado da Tabuada: ");
        Num = int.Parse(Console.ReadLine());

        for(int i = 0; i <= 10; i++)
        {
            Result = Num * i;
            Console.WriteLine("Num + "x" + i + "=" + Result);
        }
        Console.ReadLine();
    }

    static void DiasVividos()
    {
        int Idade = 0;
        int Dias = 0;
        Int Horas = 0;

        Console.WriteLine("Digite sua Idade: ");
        Idade = int.Parse(Console.ReadLine());

        Dias = 365 * Idade;
        Horas = 24 * Dias; 
    }

    static void MediaUlbra()
    {
        float Media = 0;
        float G1 = 0;
        float G2 = 0;

        Console.WriteLine("Digite a nota da G1: ");
        G1 = float.Parse(Console.ReadLine());

        Console.WriteLine("Digite a nota da G2: ");
        G2 = float.Parse(Console.ReadLine());

        Media = (G1 + G2 + G2 / 3;

        if(Media >= 6)
            Console.WriteLine("Aprovado!!!");

        else 
            Console.WriteLine("Reprovado!!");
        
        Console.WriteLine("Sua media foi: " + Media);
        Console.ReadLine
    }

    static void IMC()
    {
        char Sexo;
        float Peso;
        float Altura;
        float Imc;

        Console.WriteLine("Digite seu peso: ");
        Peso = float.Parse(Console.ReadLine);

        Console.WriteLine("Digite sua altura: ");
        Altura = float.Parse(Console.ReadLine);

        Console.WriteLine("Digite seu sexo: ( m - Masculino | f - Feminino)");
        Sexo = char.Parse(Console.ReadLine);

        Imc = (Altura * Altura) / peso;
        Console.WriteLine("Seu IMC e: " + Imc);

        if(Sexo == 'f')
        {
            if( Imc < 19.1)
                Console.WriteLine("Abaixo do Peso!");
            
            else if( Imc > 19.1 && Imc < 25.8)
                Console.WriteLine("No peso Normal.");

            else if (Imc > 25.8 && Imc < 27.3)
                Console.WriteLine("Marginalmente Acima do Peso.");
            else if (Imc > 27.3 && Imc < 32.3)
                Console.WriteLine("Acima do Peso Ideal!");
            else if (Imc > 32.3)
                Console.WriteLine("Obeso!!");
        }

            if(Sexo == 'm')
        {
            if( Imc < 20.7)
                Console.WriteLine("Abaixo do Peso!");
            
            else if( Imc > 20.7 && Imc < 26.4)
                Console.WriteLine("No peso Normal.");

            else if (Imc > 26.4 && Imc < 27.8)
                Console.WriteLine("Marginalmente Acima do Peso.");
            else if (Imc > 27.8 && Imc < 31.1)
                Console.WriteLine("Acima do Peso Ideal!");
            else if (Imc > 31.1)
                 Console.WriteLine("Obeso!!");
        }
        Console.ReadLine();
    }
	.....
}
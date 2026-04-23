
ejercicio 1:
namespace Ejercicio1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int c;
            int f;
            bool Condicion1;
            bool Condicion2;


            Console.WriteLine("ingrese un numero impar entre 3 y 7 para sus filas");
            f = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("ingrese un numero impar entre 15 y 25 para sus columnas");
            c = Convert.ToInt16(Console.ReadLine());


            Condicion1 = c% 2 != 0 && c<= 25 && 15<= c;
            Condicion2 = f% 2 != 0 && f<= 7&& 3 <= f;


            if (Condicion1 && Condicion2)
            {
                for (int i =0; i<f; i++)
                {
                    for (int b =0; b< c; b++)
                    {
                        Console.Write("*");
                    }
                    Console.WriteLine();
                }
            }
            else
            {
                Console.WriteLine("Ingrese un numero valido");
            }
        }
    }
}

ejercicio 2:
namespace Ejercicio2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int f;
            int c;
            int centroF;
            int centroC;
            bool validacionFilasImpares;
            bool validacionColumnasImpares;
            Console.WriteLine("ingrese un numero impar de filas entre 3 y 7");
            f = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("ingrese un numero impar de columnas entre 5 y 15");
            c = Convert.ToInt16(Console.ReadLine());
            validacionFilasImpares = (f % 2 != 0) && (f >= 3) && (f <= 7);
            validacionColumnasImpares = (c % 2 != 0) && (c >= 5) && (c <= 15);
            centroF = f / 2;
            centroC = c / 2;
            if (validacionFilasImpares && validacionColumnasImpares)
            {
                for (int x = 0; x < f; x++)
                {
                    for (int y = 0; y < c; y++)
                    {
                        if (x == centroF && y == centroC)
                        {
                            Console.Write(" ");
                        }
                        else
                        {
                            Console.Write("*");
                        }
                    }
                    Console.WriteLine();
                }
            }
            else
            {
                Console.WriteLine("ingresaste algun numero invalido");
            }
        }
    }
}

ejercicio 3:
namespace Ejercicio3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int f;
            int c;
            int centroF;
            int centroC;
            bool validacionfilasimpares;
            bool columnasvalidas;
            Console.WriteLine("ingrese un numero impar de filas entre 3 y 7");
            f=Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("ingrese un numero impar de columnas entre 15 y 25");
            c=Convert.ToInt16(Console.ReadLine());
            centroF=f/2;
            centroC=c/2;
            validacionfilasimpares=f%2!=0&&3<=f&&f<=7;
            columnasvalidas=c%2!=0&&15<=c&&c<=25;
            if(validacionfilasimpares&&columnasvalidas)
            {
                for(int x=0;x<f;x++)
                {
                    for(int y=0;y<c;y++)
                    {
                        if((x==0||x==centroF||x==f-1)&&(y==0||y==c-1))
                        {
                            Console.Write(" ");
                        }
                        else
                        {
                            if(x==centroF&&y==centroC)
                            {
                                Console.Write(" ");
                            }
                            else
                            {
                                Console.Write("*");
                            }
                        }
                    }
                    Console.WriteLine();
                }
            }
            else
            {
                Console.WriteLine("ingresaste algun numero invalido");
            }
        }
    }
}
	

/** Summer Moreland - Solving For Carrots - Kattis **/

using System;

public class carrots {
    public static void Main (string[] args) {
        string[] numbers = Console.ReadLine ().Split (' ');
        int num = int.Parse (numbers[0]);
        while (num-- > 0)
            Console.ReadLine ();
        Console.WriteLine (numbers[1]);
    }
}
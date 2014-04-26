object A {
  def gcd(a: Int, b: Int): Int = { if (a<b) gcd(b, a) else if (b==0) a else gcd(b,a%b) }
  def main(args: Array[String]) {
    val sc = new java.util.Scanner(System.in)
    val n = sc.nextInt();
    val in = Array.fill(n)(sc.nextInt())
    println(in.foldLeft(0)(gcd(_, _)) * n)
  }
}

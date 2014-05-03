// http://codeforces.com/contest/405/problem/A
object A extends App {
  val sc = new java.util.Scanner(System.in)
  val n = sc.nextInt();
  val a = List.fill(n)(sc.nextInt())
  println(a.sortWith(_ < _).mkString(" "))
}

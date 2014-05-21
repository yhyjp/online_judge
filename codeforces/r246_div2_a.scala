// http://codeforces.com/contest/432/problem/A
object A extends App {
  val sc = new java.util.Scanner(System.in)
  val n, k = sc.nextInt()
  val p = Array.fill(n)(sc.nextInt()).count(_ <= 5-k)
  println(p / 3)
}

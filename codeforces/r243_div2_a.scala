// http://codeforces.com/contest/426/problem/A
object A extends App {
  val sc = new java.util.Scanner(System.in)
  val n, s = sc.nextInt()
  val t = Array.fill(n)(sc.nextInt()).sortWith(_ > _)
  println(if (t.tail.sum <= s) "YES" else "NO")
}

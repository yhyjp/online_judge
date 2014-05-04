// http://codeforces.com/contest/415/problem/A
object A extends App {
  val sc = new java.util.Scanner(System.in);
  val n, m = sc.nextInt();
  var a = Array.fill(n)(-1)
  val b = Array.fill(m)(sc.nextInt()).map(_ - 1)
  for (t <- b) {
    for (i <- t until n if (a(i) == -1)) a(i) = t
    
    // same-time
    // val x = (t until n)
    // x.filter(i => a(i) == -1).foreach(a(_) = t)
  }
  println(a.map(_ + 1).mkString(" "))
}

// http://codeforces.com/contest/394/problem/A
object A extends App {
  def printABC(a:Int, b:Int, c:Int):Unit = { println("|"*a + "+" + "|"*b + "=" + "|"*c) }
  
  val in = readLine()
  val lr = in.split('=')
  val ls = lr(0).split('+')
  val List(ca, cb, r) = List(ls(0), ls(1), lr(1)).map(_.count(_ == '|'))
  val l = ca + cb
  
  if (l == r) println(in)
  else if (l-r == 2) {
    if (ca>1) printABC(ca-1, cb, r+1)
    else  printABC(ca, cb-1, r+1)
  }
  else if (r-l == 2) {
    if (r == 1) println("Impossible")
    else printABC(ca+1, cb, r-1)
  }
  else println("Impossible")
}

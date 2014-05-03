object B extends App {
  val sc = new java.util.Scanner(System.in)
  val n, t, c = sc.nextInt()
  val al = Array.fill(n)(sc.nextInt())
  def func(p:Int, ct:Int):List[Int] = {
    if (p == al.length) List[Int]()
    else al(p) match {
        case x if x >  t => 0 :: func(p+1, 0)
        case _ => ct+1 :: func(p+1, ct+1)
    }
  }
  println(func(0, 0).count(_ >= c))
}

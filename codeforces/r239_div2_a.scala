object A extends App {
  
  def calc(in:Array[Int]): Int = {
    in.sum * 5 + in.length*15
  }
  
  var ans = (1<<30)
  val n = readInt()
  val t = readLine()
  for (i <- 0 until n) {
    val line = readLine()
    val in:Array[Int]  = line.split(" ") map (_.toInt)
    ans = ans min calc(in)
  }
  println(ans)
}

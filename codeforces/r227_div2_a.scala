import scala.util.matching.Regex

object A extends App {
  def ms2s(ms: (Int, Int)) = { ms._1*60 + ms._2 }
  def s2ms(s: Int) = { (s/60, s%60) }
  def str2ms(s: String): (Int, Int) = {
    val p: Regex = """([0-9][0-9]):([0-9][0-9])""".r
    val m: Regex.Match = p.findFirstMatchIn(s).get
    return (m.group(1).toInt, m.group(2).toInt)
  }
  
  var ta, tb = ms2s(str2ms(readLine()))
  val ans = s2ms(ta+(if (ta < tb) 24*60 else 0) - tb)
  println("%02d:%02d".format(ans._1, ans._2))
}

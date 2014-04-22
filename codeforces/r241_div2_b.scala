import java.util.Scanner

object B extends App {
  
val sc = new Scanner(System.in)

val n = sc.nextInt()
val m = sc.nextInt()

val in = Array.ofDim[Int](n, m)

for (i <- 0 until n) {
  for (j <- 0 until m) {
    in(i)(j) = sc.nextInt()
  }
}

val dp = new Array[Int](m)
for (i <- 0 until n) {
  for (j <- 0 until m) {
    if (j != 0)
      dp(j) = (dp(j-1) max dp(j)) + in(i)(j)
    else
      dp(j) += in(i)(j)
  }
  print(dp(m-1) + " ")
}

}
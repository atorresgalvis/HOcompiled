
! sum up absolute of "num" integers in array "inp", store result in "asum" 
subroutine sum_abs(data, num, res)
  implicit none
  integer, intent(in) :: data(*), num
  integer, intent(out) :: res
  integer :: i,s

   s = 0
   do i=1,num
     s = s + abs(data(i)); 
   end do
   res = s;
end subroutine sum_abs

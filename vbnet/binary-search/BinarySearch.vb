Imports System

Public Module BinarySearch
    Public Function Find(ByVal input As Integer(), ByVal value As Integer) As Integer
        Dim midPoint As Integer
        Dim left As Integer = 0
        Dim right As Integer = input.Count() - 1

        While left <= right
            midPoint = (left + right) \ 2
            If input(midPoint) > value Then
                right = midPoint - 1
            ElseIf input(midPoint) < value Then
                left = midPoint + 1
            Else
                Return midPoint
            End If
        End While

        Return -1
    End Function
End Module
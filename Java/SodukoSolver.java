package Java;

class Solution {
    public void solveSudoku(char[][] board) {
        if(board == null || board.length == 0)
            return;
        SodukoSolver.solve(board,0,0);
    }
}
public class SodukoSolver {
	
	public static boolean solve(char[][] board, int j, int k) {
		if(j == 9) {
			return true;
		}
		//j-row
        //k-column
		if(board[j][k] == '.') 
        {
			for(char i ='1'; i <= '9'; i++) {
				char a = i;
				
				if(check(board, j, k, a))
                {
					board[j][k] = a;
					if(k == 8) 
                    {
						if(solve(board, j+1, 0)) 
                            return true;
						else 
                            board[j][k] = '.';
					}
                    else
                    {
						if(solve(board, j, k+1)) 
                            return true;
						else 
                            board[j][k] = '.';
					}
				}
			}
            return false;
		}
        else{
            if(k == 8) {
				if(solve(board, j+1, 0)) return true;
			}else {
				if(solve(board, j, k+1)) return true;
			}
        }
		
		return false;
	}
	
	public static boolean check(char[][] board, int j, int k, char a) {
		
		for(int i = 0; i < 9; i++) {
			if(board[j][i] == a) return false;
			
			if(board[i][k] == a) return false;
			
			if(board[3*(j/3) + i/3][3*(k/3) + i%3] == a) return false;
		}
		
		return true;
	}
}
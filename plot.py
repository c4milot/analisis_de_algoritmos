
import pandas as pd
import matplotlib
import matplotlib . pyplot as plt
 # open a csv file
df = pd.read_csv ( 'test_BF.csv')
 # graphic each line
 # plot(x=values , y= values , label , points marker)
plt.plot (df [ 'n' ] , df [ 't_mean'  ] , label = 'Fuerza Bruta ' , marker = 'o')
df = pd.read_csv ( 'test_DQ.csv')
plt.plot (df [ 'n' ] , df [ 't_mean' ] , label = 'Dividir para Vencer', marker = 's')
 # x= labels and y= labels
plt.xlabel ( 'Running_time_(nanoseconds)')
plt.ylabel ( 'Input_time_(llinear)')
 # log-scale
plt.yscale ( 'linear')
 # show legend
plt.legend ()
 #save graphic in a file
plt.savefig('plot_final_linear.png')
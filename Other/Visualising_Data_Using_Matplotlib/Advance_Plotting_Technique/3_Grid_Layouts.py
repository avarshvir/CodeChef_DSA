import matplotlib.pyplot as plt
import numpy as np

fig, axs = plt.subplots(2, 2, figsize=(6, 6))

x = np.linspace(0, 5, 100)

axs[0, 0].plot(x, np.sin(x))
axs[0, 0].set_title('Sine')

axs[0, 1].plot(x, np.cos(x))
axs[0, 1].set_title('Cosine')

axs[1, 0].plot(x, np.exp(x))
axs[1, 0].set_title('Exponential')

axs[1, 1].plot(x, np.log(x))
axs[1, 1].set_title('Logarithm')

plt.tight_layout()
plt.show()
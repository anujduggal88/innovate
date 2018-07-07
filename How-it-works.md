# LED Candles - How it works

## 1. Design
The Intel logo in this project is 3D printed for real candle like structure.

<p align="center"><img src="https://lh3.googleusercontent.com/ohRxVaKFd7NYiNnWefGMv4dyIFxUOOF6vOWgqPqSQk6X1jwnUwwOTniX3EeAI2_fMQXgok0C5KPAcdBy5QCUMpSPknSsDKMOuQIwja2BUodBPut0mz0kK2mKR5YikPAFuUzRJG8hu4phiSLOmaSwrljc7sxLD1N3pS9N7vWCUIKF-O2Jo3H-NuqkcTrdqXqZpKqI3QDmBND0z08mqn7SjpRBFaVkIGBdgwc74HHEOyP7Wqkz9yuy1-FMq3ZHnChUSSteRgQsHtlYraIRhjKkOnpXmRFvM8MzBkOt80Hjt8tU-53-Pjsb9eymrcBI5DOQopClD8ay6fDThLVGQ3wSxQR0QoGgg1FeVsP7TBybrn-dPY086QO3PRAiL1NaFo29HBjGHj5MJh6xTl9F6fTu7eWUEGoTAK6Cpgf9xCkpfvOsG736c0rcqhF6buxliB7sHsstF9a_yG1gcQMAz34EcbtA-Y-DTGnYvi9zw7ZtlRckwWYJbc3F2dsQskoGDK_z0a-S1igyMbMpAbAEMr-n4AzOI_ZnLWtd_myEwyHObsobf3NA-aZCsjm-ryUyiMPbIPRXodGsZZOJJKG5egkFibv1TI5EtTqf4K0dIJSN=w666-h604-no" alt="3D Printed Intel logo" align="center" height="50%" width="50%"></p>

<p align="center"><img src="https://lh3.googleusercontent.com/gSbWW4AhrZ_FcA9sXipeo0qBvR9YknWr_SkV7HDNiIH9iv751ZV_iKdwW5zBrs_IRLutXBWec2b_KqZUXuGgzj9AcD_tSWhMf7JWLp3-lz5W4pIT6en1SAebi5UyNOSkXZ-MGhh7hxbDilP3bdU6VQCyXyhF9GHlW6EdUl5qNDj50mFT9oFT1M2QcC0bmIkktqKZhiriybXwiXgSnv2S8MA7MoKH_asP7EXlpmu8OizrlgWqg6EQulMZ1wxKRo0N_Itqy5VCR5UsROCLd-z7NRjOo8wZPV4iikthsF2gfI-8hrE-wOOVYxgBrIRaoBA85dUV_U7YFpCHu4hnJO6b5jidLAFGE_gfcoJwDrQX2HD29U1ujVj7-MX-4QfJXozwylDIKHY5Z-VsUp4UlgacRhoQwdJzGBqMN9PIGDeh-Oryw-AX3f8PA9PGJbw-dm3z9mMjGS0NKaVMZu2zXJpaB5Vo_AgXNNQFB9eTHgtLIT984wIjxUT3HyIWUaW8rDe3R2eZNPNxIW2bAQG8mcs0ftZpWJs4_zJEnJQlICK3MZ8hFRBaJ_6Noggw5yP_lnw99ghHwq8r6Z_jqH4q4oQP0JSykpazorh694QT4cAk=w1688-h949-k-no" alt="3D Printed Intel logo with LEDs On" align="center" height="50%" width="50%"></p>

## 2. Sensor
Mic sensor is used to imitate lighting off the candles by blowing air on it.


## 3. Circuit
The circuitry for blowing off the candles is attached with Intel Genuino 101 board - which connects the LEDs and sensor.

<p align="center"><img src="https://lh3.googleusercontent.com/8lgm74VDM3AEiZPAy77m9pRzFwIHTOhMHsLTodoOepD16mUihFfYmoTjq7-3uta-JsQmJGfaQ6DVr8H56ZUYO7Ybm0B5wMpas2LuUkRvS8q7lWHw1SXvljGbNx-vjX2_zAlNT6YAr1WbIciur0KQSRYR2ZfLvY9w8Z0xlzpk1uP74tye-6t6nUd_tCW1-HYymtjUSTNTA-FeIaDOFDdGt29cjGydG7H6UY3R3FxohMqXY_45_HQ5oyZIh_Gr9g_H6xW297iAaMbTfZ8Je8VkWG_2-FU0AAf726KKddYLiUPV6h4FJbBGQeT4BQMyjKybbXpXeAuBd-RJzdYhlPhBgRPiL-x1Sldk3fSzst_lEY8_bcLIutJH4iZExSkwoFlYtSCO9lyrfyB9e-QtUogrDcVW7kCAPVI4CmqUfIx-2fMthY8jJcnOEY8b5iAevjJMeZXG-VDcnmX1gOi7Go5NuZqz6SGr5aHWi2YcozvbvjBy6f6znPW4kFGPgq84IT3cVcRHrQiyxIPNLcxvBP3ZI_LrXMDY5MHa_Wcn--gnjeb3j5klXmBmps2bXj2mMg1ud5FmloFplqYUVStVskQQuT-Gi6y0awh0QoEwXdu6=w1184-h889-no" alt="Circuitry" align="center" height="50%" width="50%"></p>


## 4. Development
The vibrations generated inside the mic sensor by blowing air produces a numerical value - which will be captured to imitate this action. Few lines of code pushed to Intel Genuino 101 controls the LEDs, when the value from the sensor exceeds a threshold value.

## 5. Working Demo
The working demo of this project can be viewed [here](http://bit.ly/101-LED-Candles).

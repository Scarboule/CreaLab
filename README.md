# Débilus (ft Arthur Prud'homme et Clément Souplet)
## Projet réalisé dans le cadre de la première semaine de CréaLab en A2 "Coding & digital innovation" à l'IIM.

Débilus est un robot autonome. L'objectif du projet est de réaliser un robot capable de se déplacer et d'éviter les obstacles.
Pour ce faire nous avons utilisé un capteur de distance à ultrason, ainsi que des moteurs électriques commandés par arduino.
Grâce au moteur le robot est capable de se déplacer, ils transmettent leurs puissance à des chenilles via des roues crantés.
Le robot possède un train de chenille sur la droite et un sur la gauche a la manière d'un tank. Un moteur contrôle un train de chenille.
Lorsqu'il détecte un obstacle en face de lui à moin de 50cm, le robot inverse le sens de rotation du moteur de droite. Ce qui le fera tourner vers la droite pour évité l'obstacle.
De plus nous avons rajouté un haut parleur, qui, via un module mp3 peut émettre un son.
Ainsi, losque le robot se trouve à moin  20cm d'un obstacle il va produire un son d'alerte à la potentiel collision.

## Principe de fonctionnement du capteur à ultrason
Les ultrasons sont des ondes sonores, inaudible par l'homme.
Le capteur est composé d'un émetteur d'ultrason et d'un récepteur.
L'émetteur envoie des ondes ultrason en face de lui avec un angle de 15°.
Lorsque les ondes rencontreront un obstacles elles vont rebondir dessus et retourner vers le récepteur.
Le temps que l'onde met à revenir permet d'obtenir la distance à laquelle l'obstacle se trouve.
le capteur possède 4 pin :
>1 +
>1 Gnd
>1 pin INput l'émetteur
>1 pin OUTput du récépteur

## Principe de fonctionnement d'un haut-parleur
Un haut-parleur est un dispositif électronique qui traduit un signal électrique en mouvement mécanique.
Le haut parleur a besoin d'un signal alternatif, il donnera un son équivalent a la fréquence et a l'amplitude du courant reçus.
Ce signal lui est envoyé directement par le module mp3.
Le mouvement est crée grâce a un éléctro-aimant et une bobine. L'éléctro-aimant est solidaire d'une membrane. Lorsque la bobine est traversé par du courant, elle va a tour de role s'éloigné et se rapprocher. En bougeant la bobine va crée une pression acoustique dans l'air, ce qui se traduit en une onde sonore, un son.

define hokuyolaser ranger
(
  sensor
  ( 			
  range [ 0.03  4.01 ]
  fov 200.0
  samples 568
  )

  color "blue"
  size [ 0.07 0.07 0.05 ] # dimensions from LMS200 data sheet	
)

define youbot position
(
  pose [ 0.0 0.0 0.0 0.0 ]
  localization "gps"   
  #odom_error [0.03 0.03 999999 999999 999999 0.02]

  size [ 0.66 0.375 0.0 ]
  origin [ 0.0 0.0 0.0 0.0 ]
  gui_nose 1
  drive "omni"
  color "red"

  hokuyolaser(pose [0.3 0 0 0])
  hokuyolaser(pose [-0.3 0 0 180])
)

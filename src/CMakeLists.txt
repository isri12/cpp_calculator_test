add_library(calc_lib addition.cpp 
                    division.cpp 
                    multiplication.cpp
                    subtraction.cpp
)














# # add_library(calcLib */*.cpp)
# # #file(GLOB APP_SOURCES */*.cpp)


# # file(GLOB SOURCES "*.cpp")
# # add_executable(test ${SOURCES})

# # message("current source dir = ${CMAKE_CURRENT_SOURCE_DIR}") 
# # target_include_directories( calcLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


# #set (calcLibs addition.cpp division.cpp multiplication.cppsubtraction.cpp)
# #add_library(calcLib SHARED addition.cpp division.cpp multiplication.cppsubtraction.cpp)
# message("CalcLib current source dir = ${CMAKE_CURRENT_SOURCE_DIR}") 
# target_include_directories( calcLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)





# # set(qm2cm_SRCS converter.cpp qm2cm.cpp main.cpp)
# # set(qm2cm_UIS qm2cm.ui)

# # qt4_wrap_ui(qm2cm_wrapped_UIS ${qm2cm_UIS})
# # qt4_automoc(${qm2cm_SRCS})

# # add_executable(qm2cm ${qm2cm_SRCS} ${qm2cm_wrapped_UIS})
# # target_link_libraries(qm2cm ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
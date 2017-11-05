FOLDER=$1
mkdir $FOLDER
cp template_main.cpp $FOLDER/main.cpp
cp template_algorithm.cpp $FOLDER/$FOLDER.cpp
cp template_algorithm.hpp $FOLDER/$FOLDER.hpp

cd $FOLDER
sed -i -e "s/ALGORITHM/$FOLDER/g" ./main.cpp
sed -i -e "s/ALGORITHM/$FOLDER/g" ./$FOLDER.cpp
sed -i -e "s/ALGORITHM/$FOLDER/g" ./$FOLDER.hpp
cd ../
